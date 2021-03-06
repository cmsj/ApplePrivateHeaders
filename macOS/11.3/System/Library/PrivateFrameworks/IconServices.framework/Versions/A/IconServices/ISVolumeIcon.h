/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/ISConcreteIcon.h>

@class NSString;

@interface ISVolumeIcon : ISConcreteIcon {

	unsigned _typeCode;
	NSString* _kextBundleIdentifier;
	NSString* _kextIconName;

}

@property (readonly) NSString * kextBundleIdentifier;              //@synthesize kextBundleIdentifier=_kextBundleIdentifier - In the implementation block
@property (readonly) NSString * kextIconName;                      //@synthesize kextIconName=_kextIconName - In the implementation block
@property (readonly) unsigned typeCode;                            //@synthesize typeCode=_typeCode - In the implementation block
+(id)concreteIconForVolumeURL:(id)arg1 ;
+(unsigned)IOKitPort;
+(id)concreteIconForDeviceIdentifier:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithKextBundleIdentifier:(id)arg1 kextIconName:(id)arg2 typeCode:(unsigned)arg3 ;
-(id)makeResourceProvider;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)resourceURL;
-(id)resourceFileName;
-(unsigned)typeCode;
-(NSString *)kextBundleIdentifier;
-(NSString *)kextIconName;
-(id)symbol;
@end

