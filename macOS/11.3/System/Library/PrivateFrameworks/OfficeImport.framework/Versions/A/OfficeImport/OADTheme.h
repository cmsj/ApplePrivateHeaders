/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject {

	NSString* mName;
	OADBaseStyles* mBaseStyles;
	OADDrawableDefaults* mDrawableDefaults;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,readonly) OADDrawableDefaults * drawableDefaults; 
-(id)description;
-(id)init;
-(NSString *)name;
-(BOOL)isEmpty;
-(void)setName:(NSString *)arg1 ;
-(OADBaseStyles *)baseStyles;
-(OADDrawableDefaults *)drawableDefaults;
-(void)validateTheme;
-(void)setBaseStyles:(OADBaseStyles *)arg1 ;
@end

