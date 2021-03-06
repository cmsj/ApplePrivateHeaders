/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPLibrary.framework/Versions/A/AMPLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface AMPLibraryAddToCloudMusicLibraryRequest : NSObject <NSSecureCoding> {

	char _flag;
	unsigned _command;
	unsigned _atpusEditValue;
	unsigned long long _commandID;
	unsigned long long _playlistID;
	unsigned long long _parentPlaylistID;
	unsigned long long _curatorAdamID;
	NSString* _playlistTitle;
	NSString* _cloudPlaylistUUID;
	unsigned long long _insertAfterPosition;
	NSArray* _adamIDs;
	NSArray* _itemIdentifiers;

}

@property (assign,nonatomic) unsigned command;                                    //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned long long commandID;                        //@synthesize commandID=_commandID - In the implementation block
@property (assign,nonatomic) unsigned long long playlistID;                       //@synthesize playlistID=_playlistID - In the implementation block
@property (assign,nonatomic) unsigned long long parentPlaylistID;                 //@synthesize parentPlaylistID=_parentPlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long curatorAdamID;                    //@synthesize curatorAdamID=_curatorAdamID - In the implementation block
@property (assign,nonatomic) char flag;                                           //@synthesize flag=_flag - In the implementation block
@property (nonatomic,retain) NSString * playlistTitle;                            //@synthesize playlistTitle=_playlistTitle - In the implementation block
@property (nonatomic,retain) NSString * cloudPlaylistUUID;                        //@synthesize cloudPlaylistUUID=_cloudPlaylistUUID - In the implementation block
@property (assign,nonatomic) unsigned long long insertAfterPosition;              //@synthesize insertAfterPosition=_insertAfterPosition - In the implementation block
@property (assign,nonatomic) unsigned atpusEditValue;                             //@synthesize atpusEditValue=_atpusEditValue - In the implementation block
@property (nonatomic,retain) NSArray * adamIDs;                                   //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers;                           //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)itemIdentifiers;
-(unsigned)command;
-(void)setFlag:(char)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(char)flag;
-(NSString *)playlistTitle;
-(void)setPlaylistTitle:(NSString *)arg1 ;
-(void)setCommandID:(unsigned long long)arg1 ;
-(unsigned long long)commandID;
-(unsigned long long)playlistID;
-(void)setPlaylistID:(unsigned long long)arg1 ;
-(unsigned long long)parentPlaylistID;
-(void)setParentPlaylistID:(unsigned long long)arg1 ;
-(unsigned long long)curatorAdamID;
-(void)setCuratorAdamID:(unsigned long long)arg1 ;
-(NSString *)cloudPlaylistUUID;
-(void)setCloudPlaylistUUID:(NSString *)arg1 ;
-(unsigned long long)insertAfterPosition;
-(void)setInsertAfterPosition:(unsigned long long)arg1 ;
-(unsigned)atpusEditValue;
-(void)setAtpusEditValue:(unsigned)arg1 ;
-(NSArray *)adamIDs;
-(void)setAdamIDs:(NSArray *)arg1 ;
@end

