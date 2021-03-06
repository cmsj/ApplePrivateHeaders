/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface VSSubscriptionFetchOptionDescription : NSObject <NSCopying> {

	char _container;
	NSString* _key;
	id _defaultValue;
	unsigned long long _minCount;
	Class _allowedClass;
	NSPredicate* _allowedValuePredicate;

}

@property (nonatomic,copy) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id defaultValue;                                //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,getter=isContainer,nonatomic) char container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long minCount;                    //@synthesize minCount=_minCount - In the implementation block
@property (nonatomic,retain) Class allowedClass;                             //@synthesize allowedClass=_allowedClass - In the implementation block
@property (nonatomic,copy) NSPredicate * allowedValuePredicate;              //@synthesize allowedValuePredicate=_allowedValuePredicate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(Class)allowedClass;
-(void)setContainer:(char)arg1 ;
-(char)isContainer;
-(unsigned long long)minCount;
-(void)setMinCount:(unsigned long long)arg1 ;
-(void)setAllowedClass:(Class)arg1 ;
-(NSPredicate *)allowedValuePredicate;
-(void)setAllowedValuePredicate:(NSPredicate *)arg1 ;
@end

