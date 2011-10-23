//
//  WFDeviceParams.h
//  WFConnector
//
//  Created by Michael Moore on 11/9/10.
//  Copyright 2010 Wahoo Fitness. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WFConnector/common_types.h>


/**
 * Represents the connection parameters for a specific ANT device.
 */
@interface WFDeviceParams : NSObject
{
	/** \cond InterfaceDocs */

	USHORT deviceNumber;
	UCHAR transmissionType;
	
	/** \endcond */
}

/**
 * Specifies the ANT device ID.
 */
@property (nonatomic, assign) USHORT deviceNumber;

/**
 * Specifies the ANT transmission type.
 *
 * @note This value can be obtained from the WFSensorConnection::transmissionType
 * property once the device is connected.  The pairing procedure is documented
 * in the summary for the WFSensorConnection class.
 */
@property (nonatomic, assign) UCHAR transmissionType;


/**
 * Returns a boolean value indicating whether this WFDeviceParams is valid.
 *
 * @return <c>TRUE</c> if valid, otherwise <c>FALSE</c>.
 */
- (BOOL)isValid;

@end
