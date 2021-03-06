/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface CRIndexElement : NSObject <NSCopying> {

	NSUUID* _replica;
	long long _integer;

}

@property (nonatomic,retain) NSUUID * replica;               //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
+(id)elementWithInteger:(long long)arg1 replica:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)hashValue;
-(NSUUID *)replica;
-(void)setReplica:(NSUUID *)arg1 ;
-(id)initWithInteger:(long long)arg1 replica:(id)arg2 ;
-(long long)integer;
-(void)setInteger:(long long)arg1 ;
@end

