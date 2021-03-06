/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class NSString, NSNumber;

@interface BRCVolume : NSObject {

	statfs _stfs;
	char _isCaseSensitive;
	char _isIgnoringOwnership;
	char _hasRenameExcl;
	char _hasRenameSwap;
	char _hasCloning;
	int _deviceID;

}

@property (nonatomic,readonly) int deviceID;                          //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) char isCaseSensitive;                  //@synthesize isCaseSensitive=_isCaseSensitive - In the implementation block
@property (nonatomic,readonly) char isIgnoringOwnership;              //@synthesize isIgnoringOwnership=_isIgnoringOwnership - In the implementation block
@property (nonatomic,readonly) char hasRenameSwap;                    //@synthesize hasRenameSwap=_hasRenameSwap - In the implementation block
@property (nonatomic,readonly) char hasRenameExcl;                    //@synthesize hasRenameExcl=_hasRenameExcl - In the implementation block
@property (nonatomic,readonly) char hasCloning;                       //@synthesize hasCloning=_hasCloning - In the implementation block
@property (nonatomic,readonly) NSString * mountPath; 
@property (nonatomic,readonly) NSString * fsTypeName; 
@property (nonatomic,readonly) NSNumber * freeSize; 
@property (nonatomic,readonly) NSNumber * totalSize; 
-(id)description;
-(int)deviceID;
-(NSNumber *)totalSize;
-(char)isCaseSensitive;
-(NSString *)mountPath;
-(char)setUpForRelPath:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(NSString *)fsTypeName;
-(NSNumber *)freeSize;
-(char)isIgnoringOwnership;
-(char)hasRenameExcl;
-(char)hasRenameSwap;
-(char)hasCloning;
@end

