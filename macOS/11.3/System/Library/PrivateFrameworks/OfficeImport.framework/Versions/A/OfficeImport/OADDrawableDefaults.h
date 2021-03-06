/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADDrawableCategoryDefaults;

@interface OADDrawableDefaults : NSObject {

	OADDrawableCategoryDefaults* mShapeDefaults;
	OADDrawableCategoryDefaults* mLineDefaults;
	OADDrawableCategoryDefaults* mTextDefaults;

}

@property (nonatomic,retain) OADDrawableCategoryDefaults * shapeDefaults; 
@property (nonatomic,retain) OADDrawableCategoryDefaults * lineDefaults; 
@property (nonatomic,retain) OADDrawableCategoryDefaults * textDefaults; 
-(id)description;
-(BOOL)isEmpty;
-(id)addShapeDefaults;
-(id)addLineDefaults;
-(id)addTextDefaults;
-(OADDrawableCategoryDefaults *)lineDefaults;
-(OADDrawableCategoryDefaults *)shapeDefaults;
-(OADDrawableCategoryDefaults *)textDefaults;
-(void)addDefaults;
-(void)setShapeDefaults:(OADDrawableCategoryDefaults *)arg1 ;
-(void)setLineDefaults:(OADDrawableCategoryDefaults *)arg1 ;
-(void)setTextDefaults:(OADDrawableCategoryDefaults *)arg1 ;
@end

