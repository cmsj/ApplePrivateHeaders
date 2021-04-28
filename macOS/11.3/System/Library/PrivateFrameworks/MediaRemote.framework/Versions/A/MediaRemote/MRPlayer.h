/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSData;

@interface MRPlayer : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _displayName;
	long long _audioSessionType;
	NSSet* _mxSessionIDs;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long audioSessionType;                               //@synthesize audioSessionType=_audioSessionType - In the implementation block
@property (nonatomic,copy) NSSet * mxSessionIDs;                                       //@synthesize mxSessionIDs=_mxSessionIDs - In the implementation block
@property (nonatomic,readonly) char hasAuxiliaryProperties; 
@property (nonatomic,readonly) MRPlayer * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (getter=isDefaultPlayer,nonatomic,readonly) char defaultPlayer; 
+(id)anyPlayer;
+(id)defaultPlayer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ;
-(MRPlayer *)skeleton;
-(NSSet *)mxSessionIDs;
-(void)setMxSessionIDs:(NSSet *)arg1 ;
-(char)hasAuxiliaryProperties;
-(void)setAudioSessionType:(long long)arg1 ;
-(long long)audioSessionType;
-(char)isDefaultPlayer;
@end
