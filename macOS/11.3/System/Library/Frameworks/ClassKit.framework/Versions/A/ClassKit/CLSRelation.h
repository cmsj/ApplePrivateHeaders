/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSRelation : NSObject {

	char _faultable;
	Class _fromEntity;
	NSString* _fromKey;
	Class _toEntity;
	NSString* _toKey;

}

@property (nonatomic,readonly) Class fromEntity;                               //@synthesize fromEntity=_fromEntity - In the implementation block
@property (nonatomic,readonly) NSString * fromKey;                             //@synthesize fromKey=_fromKey - In the implementation block
@property (nonatomic,readonly) Class toEntity;                                 //@synthesize toEntity=_toEntity - In the implementation block
@property (nonatomic,readonly) NSString * toKey;                               //@synthesize toKey=_toKey - In the implementation block
@property (getter=isFaultable,nonatomic,readonly) char faultable;              //@synthesize faultable=_faultable - In the implementation block
-(id)description;
-(id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(char)arg5 ;
-(NSString *)fromKey;
-(Class)toEntity;
-(char)isInverseOfRelation:(id)arg1 ;
-(char)isEquivalentToRelation:(id)arg1 ;
-(NSString *)toKey;
-(char)isFaultable;
-(Class)fromEntity;
@end

