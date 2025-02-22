
#include "AoiEntity.h"
#include "glut.h"


AoiEntity::AoiEntity(float x, float z, float speed, AoiContext* context) :Aoi(x, z, speed, context)
{

}


AoiEntity::~AoiEntity()
{
}

void AoiEntity::Enter()
{
	create_entity(m_context->m_context, m_object, m_pos.m_x, m_pos.m_z, AoiContext::OnEntityEnter, AoiContext::OnEntityLeave, m_context);
}

void AoiEntity::Update(float interval) {
	Aoi::Update(interval);
	move_entity(m_context->m_context, m_object, m_pos.m_x, m_pos.m_z, m_context);
}

void AoiEntity::Draw()
{
	Aoi::Draw();
}
