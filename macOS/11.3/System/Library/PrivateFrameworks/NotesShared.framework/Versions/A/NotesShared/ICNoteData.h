/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, ICNote;

@interface ICNoteData : NSManagedObject {

	char needsToBeSaved;
	char settingNoteData;

}

@property (assign,getter=isSettingNoteData,nonatomic) char settingNoteData; 
@property (nonatomic,retain) NSData * cryptoInitializationVector; 
@property (nonatomic,retain) NSData * cryptoTag; 
@property (assign) char needsToBeSaved; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,readonly) NSData * primitiveData; 
-(void)willAccessValueForKey:(id)arg1 ;
-(void)willSave;
-(void)setNeedsToBeSaved:(char)arg1 ;
-(char)needsToBeSaved;
-(void)saveNoteDataIfNeeded;
-(char)isSettingNoteData;
-(void)setSettingNoteData:(char)arg1 ;
@end
