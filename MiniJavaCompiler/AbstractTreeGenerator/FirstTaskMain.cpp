#include "AbstractTreeGeneratorMain.h"

#include "GraphvizLauncher.h"
#include "INode.h"
#include "CompoundStatement.h"
#include "AssignStatement.h"
#include "OperationExpression.h"
#include "NumExpression.h"
#include "PrintStatement.h"
#include "LastExpressionList.h"
#include "IdExpression.h"

#include <memory>

void AbstractTreeGenerator::AbstractTreeGeneratorMain()
{
	// TODO: ����������� � ��������������
	// TODO: ����� �� ������ ���� ���? �� ����� �� �� ����������
	//std::shared_ptr<CCompoundStatement> root(new CCompoundStatement(
	//	std::shared_ptr<CAssignStatement>(new CAssignStatement("a",
	//		std::shared_ptr<COperationExpression>(new COperationExpression(
	//			std::shared_ptr<CNumExpression>(std::shared_ptr<AbstractTreeGenerator::CINTEGER_LITERAL>(5)),
	//			std::shared_ptr<CNumExpression>(std::shared_ptr<AbstractTreeGenerator::CINTEGER_LITERAL>(3)),
	//			COperationExpression::Plus)))),
	//	std::shared_ptr<CPrintStatement>(new CPrintStatement(
	//		std::shared_ptr<CLastExpressionList>(new CLastExpressionList(
	//			std::shared_ptr<CIdExpression>(new CIdExpression("a"))))))));
	//GraphvizOutput::CGraphvizLauncher::Launch(root.get());
}
