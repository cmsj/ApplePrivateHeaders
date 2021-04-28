/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>
#import <libobjc.A.dylib/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, NSString;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProperties;
-(NSString *)description;
-(id)fill;
-(id)initWithDefaults;
-(void)setFill:(id)arg1 ;
-(char)hasFill;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(char)hasEffects;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(char)hasScene3D;
-(char)hasShape3D;
-(id)scene3D;
-(id)shape3D;
@end
