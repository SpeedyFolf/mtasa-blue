/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/HandlingProperty.h
 *  PURPOSE:     Header for common definitions
 *
 *  Multi Theft Auto is available from https://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

enum class HandlingProperty
{
    HANDLING_NONE = 0,

    HANDLING_MASS,
    HANDLING_TURNMASS,
    HANDLING_DRAGCOEFF,
    HANDLING_CENTEROFMASS,
    HANDLING_PERCENTSUBMERGED,
    HANDLING_TRACTIONMULTIPLIER,
    HANDLING_DRIVETYPE,
    HANDLING_ENGINETYPE,
    HANDLING_NUMOFGEARS,
    HANDLING_ENGINEACCELERATION,
    HANDLING_ENGINEINERTIA,
    HANDLING_MAXVELOCITY,
    HANDLING_BRAKEDECELERATION,
    HANDLING_BRAKEBIAS,
    HANDLING_ABS,
    HANDLING_STEERINGLOCK,
    HANDLING_TRACTIONLOSS,
    HANDLING_TRACTIONBIAS,
    HANDLING_SUSPENSION_FORCELEVEL,
    HANDLING_SUSPENSION_DAMPING,
    HANDLING_SUSPENSION_HIGHSPEEDDAMPING,
    HANDLING_SUSPENSION_UPPER_LIMIT,
    HANDLING_SUSPENSION_LOWER_LIMIT,
    HANDLING_SUSPENSION_FRONTREARBIAS,
    HANDLING_SUSPENSION_ANTIDIVEMULTIPLIER,
    HANDLING_COLLISIONDAMAGEMULTIPLIER,
    HANDLING_SEATOFFSETDISTANCE,
    HANDLING_MONETARY,
    HANDLING_HANDLINGFLAGS,
    HANDLING_MODELFLAGS,
    HANDLING_HEADLIGHT,
    HANDLING_TAILLIGHT,
    HANDLING_ANIMGROUP,
    HANDLING_MAX,
};
