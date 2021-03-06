/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRFieldCKInfo, BRCItemID, NSString, NSData, BRCUserRowID, BRMangledID;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding> {

	BRFieldCKInfo* _ckInfo;
	BRCItemID* _parentID;
	char _state;
	char _type;
	char _mode;
	long long _birthtime;
	long long _lastUsedTime;
	long long _favoriteRank;
	NSString* _logicalName;
	NSString* _aliasTarget;
	char _hiddenExt;
	NSData* _xattrSignature;
	NSData* _lazyXattr;
	NSData* _finderTags;
	NSString* _trashPutBackPath;
	BRCItemID* _trashPutBackParentID;
	BRCUserRowID* _creatorRowID;

}

@property (nonatomic,retain) BRFieldCKInfo * ckInfo;                             //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,retain) BRCItemID * parentID;                               //@synthesize parentID=_parentID - In the implementation block
@property (assign,nonatomic) char state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSString * logicalName;                             //@synthesize logicalName=_logicalName - In the implementation block
@property (assign,nonatomic) long long birthtime;                                //@synthesize birthtime=_birthtime - In the implementation block
@property (assign,nonatomic) long long lastUsedTime;                             //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) long long favoriteRank;                             //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (assign,getter=isHiddenExt,nonatomic) char hiddenExt;                  //@synthesize hiddenExt=_hiddenExt - In the implementation block
@property (nonatomic,retain) NSData * finderTags;                                //@synthesize finderTags=_finderTags - In the implementation block
@property (nonatomic,retain) NSData * xattrSignature;                            //@synthesize xattrSignature=_xattrSignature - In the implementation block
@property (nonatomic,readonly) NSString * representableName; 
@property (nonatomic,readonly) BRMangledID * _aliasTargetMangledID; 
@property (nonatomic,readonly) NSString * aliasTarget;                           //@synthesize aliasTarget=_aliasTarget - In the implementation block
@property (nonatomic,retain) NSData * lazyXattr;                                 //@synthesize lazyXattr=_lazyXattr - In the implementation block
@property (nonatomic,readonly) char iWorkShareable; 
@property (nonatomic,retain) NSString * trashPutBackPath;                        //@synthesize trashPutBackPath=_trashPutBackPath - In the implementation block
@property (nonatomic,retain) BRCItemID * trashPutBackParentID;                   //@synthesize trashPutBackParentID=_trashPutBackParentID - In the implementation block
@property (nonatomic,retain) BRCUserRowID * creatorRowID;                        //@synthesize creatorRowID=_creatorRowID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)state;
-(char)type;
-(void)setMode:(char)arg1 ;
-(id)displayName;
-(char)isExecutable;
-(void)setState:(char)arg1 ;
-(char)mode;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(NSString *)logicalName;
-(long long)lastUsedTime;
-(long long)favoriteRank;
-(char)isHiddenExt;
-(void)setFavoriteRank:(long long)arg1 ;
-(char)isWritable;
-(BRFieldCKInfo *)ckInfo;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(void)setLastUsedTime:(long long)arg1 ;
-(NSData *)finderTags;
-(void)setFinderTags:(NSData *)arg1 ;
-(long long)birthtime;
-(BRCUserRowID *)creatorRowID;
-(unsigned long long)diffAgainst:(id)arg1 ;
-(BRCItemID *)parentID;
-(BRMangledID *)_aliasTargetMangledID;
-(id)_aliasTargetItemID;
-(void)_updateAliasTarget:(id)arg1 ;
-(NSData *)xattrSignature;
-(NSString *)trashPutBackPath;
-(BRCItemID *)trashPutBackParentID;
-(NSString *)aliasTarget;
-(id)descriptionWithContext:(id)arg1 origName:(id)arg2 ;
-(char)checkStateWithItemID:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(id)initWithStatInfo:(id)arg1 ;
-(NSString *)representableName;
-(char)iWorkShareable;
-(char)check:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(char)isEtagEqual:(id)arg1 ;
-(void)setCreatorRowID:(BRCUserRowID *)arg1 ;
-(void)setBirthtime:(long long)arg1 ;
-(void)setParentID:(BRCItemID *)arg1 ;
-(void)setHiddenExt:(char)arg1 ;
-(void)setXattrSignature:(NSData *)arg1 ;
-(NSData *)lazyXattr;
-(void)setLazyXattr:(NSData *)arg1 ;
-(void)setLogicalName:(NSString *)arg1 ;
-(void)setTrashPutBackPath:(NSString *)arg1 ;
-(void)setTrashPutBackParentID:(BRCItemID *)arg1 ;
@end

