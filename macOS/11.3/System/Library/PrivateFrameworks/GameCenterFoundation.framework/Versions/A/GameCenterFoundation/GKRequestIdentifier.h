/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying> {

	unsigned long long _savedHash;
	SEL _selector;
	NSArray* _arguments;

}

@property (assign,nonatomic) unsigned long long savedHash;              //@synthesize savedHash=_savedHash - In the implementation block
@property (assign,nonatomic) SEL selector;                              //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) NSArray * arguments;                       //@synthesize arguments=_arguments - In the implementation block
+(id)requestIdentifierForInvocation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)setArguments:(NSArray *)arg1 ;
-(NSArray *)arguments;
-(id)initWithInvocation:(id)arg1 ;
-(id)_argumentsForInvocation:(id)arg1 ;
-(unsigned long long)savedHash;
-(void)setSavedHash:(unsigned long long)arg1 ;
@end

