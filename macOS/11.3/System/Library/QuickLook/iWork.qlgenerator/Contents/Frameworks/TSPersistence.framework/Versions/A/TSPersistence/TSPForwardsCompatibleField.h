/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPForwardsCompatibleField
@property (nonatomic,readonly) char hasKnownValues; 
@property (nonatomic,readonly) char hasUnknownValues; 
@required
-(void)loadFromUnarchiver:(id)arg1;
-(void)saveToArchiver:(id)arg1;
-(void)updateMessageInfo:(MessageInfo*)arg1;
-(const FieldInfo*)fieldInfo;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2;
-(char)hasKnownValues;
-(char)hasUnknownValues;

@end

