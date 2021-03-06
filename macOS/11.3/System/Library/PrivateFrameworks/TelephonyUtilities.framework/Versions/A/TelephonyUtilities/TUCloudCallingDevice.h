/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying> {

	char _defaultPairedDevice;
	char _supportsRestrictingSecondaryCalling;
	NSString* _name;
	NSString* _modelIdentifier;
	NSString* _uniqueID;
	NSArray* _linkedUserURIs;

}

@property (nonatomic,copy) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelIdentifier;                                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSArray * linkedUserURIs;                                             //@synthesize linkedUserURIs=_linkedUserURIs - In the implementation block
@property (assign,getter=isDefaultPairedDevice,nonatomic) char defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
@property (assign,nonatomic) char supportsRestrictingSecondaryCalling;                           //@synthesize supportsRestrictingSecondaryCalling=_supportsRestrictingSecondaryCalling - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)modelIdentifier;
-(char)isDefaultPairedDevice;
-(NSArray *)linkedUserURIs;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(char)supportsRestrictingSecondaryCalling;
-(void)setLinkedUserURIs:(NSArray *)arg1 ;
-(void)setDefaultPairedDevice:(char)arg1 ;
-(void)setSupportsRestrictingSecondaryCalling:(char)arg1 ;
@end

