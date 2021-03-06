/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CADisplayAttributes : NSObject {

	EDIDAttributes _edid_attributes;

}

@property (readonly) long long dolbyVision; 
@property (readonly) long long pqEOTF; 
@property (readonly) long long hdrStaticMetadataType1; 
@property (readonly) long long bt2020YCC; 
@property (readonly) char legacyHDMIEDID; 
@property (readonly) unsigned manufacturerID; 
@property (readonly) unsigned productID; 
@property (readonly) unsigned weekOfManufacture; 
@property (readonly) unsigned yearOfManufacture; 
@property (readonly) unsigned serialNumber; 
-(long long)dolbyVision;
-(long long)pqEOTF;
-(long long)hdrStaticMetadataType1;
-(long long)bt2020YCC;
-(char)legacyHDMIEDID;
-(unsigned)productID;
-(unsigned)serialNumber;
-(unsigned)weekOfManufacture;
-(unsigned)yearOfManufacture;
-(unsigned)manufacturerID;
-(id)_initWithAttributes:(EDIDAttributes)arg1 ;
@end

