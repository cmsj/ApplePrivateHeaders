/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/Versions/A/UARPiCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UARPiCloud/UARPiCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, UARPiCloudAccessoryRecord;

@interface UARPiCloudAccessory : NSObject <NSCopying> {

	char _signatureValidationNeeded;
	NSMutableArray* _availableRecords;
	NSString* _productGroup;
	NSString* _productNumber;
	NSString* _firmwareVersion;
	UARPiCloudAccessoryRecord* _record;

}

@property (readonly) NSString * productGroup;                       //@synthesize productGroup=_productGroup - In the implementation block
@property (readonly) NSString * productNumber;                      //@synthesize productNumber=_productNumber - In the implementation block
@property (readonly) NSString * firmwareVersion;                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (assign) char signatureValidationNeeded;                  //@synthesize signatureValidationNeeded=_signatureValidationNeeded - In the implementation block
@property (copy) NSMutableArray * availableRecords;                 //@synthesize availableRecords=_availableRecords - In the implementation block
@property (retain) UARPiCloudAccessoryRecord * record;              //@synthesize record=_record - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)firmwareVersion;
-(UARPiCloudAccessoryRecord *)record;
-(void)setRecord:(UARPiCloudAccessoryRecord *)arg1 ;
-(NSString *)productGroup;
-(NSString *)productNumber;
-(void)setSignatureValidationNeeded:(char)arg1 ;
-(char)signatureValidationNeeded;
-(id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ;
-(void)setAvailableRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)availableRecords;
@end

