#include "Generator.h"

void CGenerator::SetRoot( std::shared_ptr<IRTree::CCodeFragment>  theRoot )
{
	root = theRoot;
}

std::shared_ptr<IRTree::CCodeFragment>  CGenerator::GetRoot()
{
	return root;
}

void CGenerator::SplitIRTree()
{
	std::shared_ptr<IRTree::CCodeFragment> currentCodeFragment = root;
	while( currentCodeFragment != 0 ) {
		std::shared_ptr<IRTStatement> currentStatement = currentCodeFragment->GetTree();

		while( currentStatement != 0 ) {
			std::shared_ptr<IRTSSeq> currentSeq = std::dynamic_pointer_cast<IRTSSeq>( currentStatement );
			assert( currentSeq != 0 );
			std::shared_ptr<IRTSSeq> oldRight = currentSeq;

			std::shared_ptr<IRTStatement> leftStm = currentSeq->GetStmLeft();
			assert( std::dynamic_pointer_cast<IRTSSeq>(leftStm) == 0 );
			std::shared_ptr<IRTStatement> rightStm = currentSeq->GetStmRight();

			while( std::dynamic_pointer_cast<IRTSSeq>( rightStm ) != 0 && CheckNewLabel( rightStm ) ) {
				std::shared_ptr<IRTSSeq> tmp = std::dynamic_pointer_cast<IRTSSeq>( rightStm );
				assert( tmp != 0 );
				leftStm = tmp->GetStmLeft();
				oldRight = tmp;
				rightStm = tmp->GetStmRight();
			}

			// ������ �������� Seq, �.�. ����� �� ������ ������
			if( std::dynamic_pointer_cast<IRTSSeq>(rightStm) != 0 ) {
				oldRight->CutStmRight();
				currentStatement = rightStm;
				rightStm = nullptr;
				AddBasicBlock( currentSeq );
			}  else {
			// ������ �������� �� Seq, �.�. ����� �� ����� � ��������� ��� ��� ��������
				AddBasicBlock( currentSeq );
				currentStatement = 0;
			}
		}
		currentCodeFragment = currentCodeFragment->GetNext();
	}
}

bool CGenerator::CheckNewLabel( std::shared_ptr<IRTStatement> theStm )
{
	std::shared_ptr<IRTSSeq> currentSeq = std::dynamic_pointer_cast<IRTSSeq>( theStm );
	assert( currentSeq != 0 );
	std::shared_ptr<IRTStatement> leftStm = currentSeq->GetStmLeft();
	std::shared_ptr<IRTStatement> rightStm = currentSeq->GetStmRight();
	assert( std::dynamic_pointer_cast<IRTSSeq>(leftStm) == 0 );

	if( std::dynamic_pointer_cast<IRTSLabel>(leftStm) != 0 ) {
		return false;
	}
	return true;
}

// TODO : �������� ���������� ������� ��� ���������� ������
void CGenerator::AddBasicBlock( std::shared_ptr<IRTStatement> block )
{
	std::shared_ptr<IRTSSeq> currentSeq = std::dynamic_pointer_cast<IRTSSeq>( block );
	assert( currentSeq != 0 );
	std::shared_ptr<IRTStatement> oldRight = block;
	std::shared_ptr<IRTStatement> rightStm = currentSeq->GetStmRight();
	std::shared_ptr<IRTStatement> rightRightStm;
	if( std::dynamic_pointer_cast<IRTSSeq>(rightStm) != 0 ) {
		std::shared_ptr<IRTSSeq> tmp = std::dynamic_pointer_cast<IRTSSeq>(rightStm);
		assert( tmp != 0 );
		rightRightStm = tmp->GetStmRight();
	}
	while( rightRightStm != 0 ) {
		std::shared_ptr<IRTSSeq> tmp = std::dynamic_pointer_cast<IRTSSeq>(rightStm);
		assert( tmp != 0 );
		oldRight = rightStm;
		rightStm = rightRightStm;
		rightRightStm = tmp->GetStmRight();
	}
	std::shared_ptr<IRTSSeq> rightSeq = std::dynamic_pointer_cast<IRTSSeq>(rightStm);
	std::shared_ptr<IRTStatement> leftStm = rightSeq->GetStmLeft();
	assert( std::dynamic_pointer_cast<IRTSSeq>(leftStm) == 0 );

	std::shared_ptr<IRTSSeq> rightSeq = std::dynamic_pointer_cast<IRTSSeq>(rightStm);


	basicBlocks.push_back( block );
}
