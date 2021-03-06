/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MPMediaLibraryResultSet <NSObject,NSCopying>
@property (nonatomic,readonly) long long revision; 
@property (nonatomic,readonly) long long localRevision; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@required
-(unsigned long long)count;
-(long long)revision;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1;
-(NSArray *)sectionIndexTitles;
-(char)updateToLibraryCurrentRevision;
-(long long)persistentIDAtIndex:(unsigned long long)arg1;
-(void)enumerateSectionHeadersUsingBlock:(/*^block*/id)arg1;
-(long long)localRevision;

@end

