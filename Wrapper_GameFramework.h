//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//   : Header File.h
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#ifndef WRAPPER_GAMEFRAMEWORK_H
#define WRAPPER_GAMEFRAMEWORK_H
#pragma once

namespace Florance_CLIENT
{
	class Wrapper_GameFramework
	{
//	PUBLIC ===============================================================================================================================================
//  ======================================================================================================================================================
//  ======================================================================================================================================================
	public:
//	CONSTANTS ********************************************************************************************************************************************
// 	******************************************************************************************************************************************************


//	REGISTERS ********************************************************************************************************************************************
// 	******************************************************************************************************************************************************
    struct PRAISE_INPUTS
    {

    };

    struct DATA
    {

    };
    struct DATA_UPDATES
    {

    };

//	CONSTRUCT & DESTRUCTION ******************************************************************************************************************************
// 	******************************************************************************************************************************************************
        Wrapper_GameFramework()
        {
            //ctor
        }

        ~Wrapper_GameFramework()
        {
            //dtor
        }


//	METHODS **********************************************************************************************************************************************
// 	******************************************************************************************************************************************************
//	STATIC -----------------------------------------------------------------------------------------------------------------------------------------------

	//	GET & SET ----------------------------------------------------------------------------------------------------------------------------------------
    static void set_Praise_1_Input_1(bool value);
    static void set_Praise_1_Input_2(bool value);
//	DYNAMIC ----------------------------------------------------------------------------------------------------------------------------------------------

	//	GET & SET ----------------------------------------------------------------------------------------------------------------------------------------



//	PROTECTED ============================================================================================================================================
//  ======================================================================================================================================================
//  ======================================================================================================================================================
    protected:
//	CONSTANTS ********************************************************************************************************************************************
// 	******************************************************************************************************************************************************


//	REGISTERS ********************************************************************************************************************************************
// 	******************************************************************************************************************************************************


//	METHODS **********************************************************************************************************************************************
// 	******************************************************************************************************************************************************
//	STATIC -----------------------------------------------------------------------------------------------------------------------------------------------

	//	GET & SET ----------------------------------------------------------------------------------------------------------------------------------------

//	DYNAMIC ----------------------------------------------------------------------------------------------------------------------------------------------

	//	GET & SET ----------------------------------------------------------------------------------------------------------------------------------------



//	PRIVATE ==============================================================================================================================================
//  ======================================================================================================================================================
//  ======================================================================================================================================================
	private:
//	CONSTANTS ********************************************************************************************************************************************
// 	******************************************************************************************************************************************************


//	REGISTERS ********************************************************************************************************************************************
// 	******************************************************************************************************************************************************


//	METHODS **********************************************************************************************************************************************
// 	******************************************************************************************************************************************************
//	STATIC -----------------------------------------------------------------------------------------------------------------------------------------------

	//	GET & SET ----------------------------------------------------------------------------------------------------------------------------------------

//	DYNAMIC ----------------------------------------------------------------------------------------------------------------------------------------------

	//	GET & SET ----------------------------------------------------------------------------------------------------------------------------------------


	};//End Class <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
}//End NameSpace <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#endif // WRAPPER_GAMEFRAMEWORK_H
