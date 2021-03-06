/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/Versions/A/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <libobjc.A.dylib/MTTinting.h>

@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject <MTTinting> {

	NSDictionary* _tintColorDescription;
	CGColorRef _tintColor;
	double _tintAlpha;

}

@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription;              //@synthesize tintColorDescription=_tintColorDescription - In the implementation block
@property (nonatomic,readonly) CGColorRef tintColor;                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) double tintAlpha;                                      //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGColorRef)tintColor;
-(NSDictionary *)tintColorDescription;
-(double)tintAlpha;
-(void)_processTintingDescription:(id)arg1 defaultingToIdentity:(char)arg2 ;
-(id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2 ;
@end

