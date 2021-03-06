/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNRecentLikenessesDataSource <NSObject>
@required
-(void)commitEditing;
-(void)setContact:(id)arg1;
-(id)currentLikeness;
-(void)addNewLikeness:(id)arg1;
-(void)deleteLikeness:(id)arg1;
-(void)updateLikeness:(id)arg1;
-(void)setLikenessMutatorFactory:(id)arg1;
-(id)contactLikenessModelObservable;
-(void)setAsCurrentLikeness:(id)arg1;

@end

