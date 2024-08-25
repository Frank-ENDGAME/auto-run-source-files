class PlayerBase : PlayerBase
{
    private bool m_IsAutorunning;
    
    void PlayerBase()
    {
        m_IsAutorunning = false;
        GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(EnableAutorunCheck, 100, true);
    }

    void EnableAutorunCheck()
    {
        // Check if Numpad + is pressed
        if (GetInput().IsKeyDown(KeyCode.KC_ADD))
        {
            if (!m_IsAutorunning)
            {
                m_IsAutorunning = true;
                StartAutorun();
            }
        }
        else
        {
            if (m_IsAutorunning)
            {
                m_IsAutorunning = false;
                StopAutorun();
            }
        }
    }

    void StartAutorun()
    {
        // Set player to run at normal speed
        GetMovementState().SetSpeed(5.0); // Adjust speed value as needed
    }

    void StopAutorun()
    {
        // Reset player speed or other states if needed
        GetMovementState().SetSpeed(2.0); // Reset to default walking speed
    }
}
