/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/Versions/A/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPUAProgressItem : NSObject {

	unsigned _expectedCount;
	unsigned _completeCount;
	unsigned _errorCount;
	unsigned _deleteCount;
	NSString* _bundleID;
	NSString* _uaID;
	NSString* _relatedID;

}

@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * uaID;                     //@synthesize uaID=_uaID - In the implementation block
@property (nonatomic,retain) NSString * relatedID;                //@synthesize relatedID=_relatedID - In the implementation block
@property (assign,nonatomic) unsigned expectedCount;              //@synthesize expectedCount=_expectedCount - In the implementation block
@property (assign,nonatomic) unsigned completeCount;              //@synthesize completeCount=_completeCount - In the implementation block
@property (assign,nonatomic) unsigned errorCount;                 //@synthesize errorCount=_errorCount - In the implementation block
@property (assign,nonatomic) unsigned deleteCount;                //@synthesize deleteCount=_deleteCount - In the implementation block
+(void)initialize;
+(void)queueRelatedDelete:(id)arg1 forBundleID:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(unsigned)errorCount;
-(void)add;
-(unsigned)deleteCount;
-(void)update:(int)arg1 ;
-(void)setErrorCount:(unsigned)arg1 ;
-(unsigned)completeCount;
-(id)initWithBundleID:(id)arg1 uaID:(id)arg2 relatedID:(id)arg3 ;
-(void)setExpectedCount:(unsigned)arg1 ;
-(NSString *)uaID;
-(NSString *)relatedID;
-(unsigned)expectedCount;
-(void)setCompleteCount:(unsigned)arg1 ;
-(void)setDeleteCount:(unsigned)arg1 ;
-(void)setUaID:(NSString *)arg1 ;
-(void)setRelatedID:(NSString *)arg1 ;
@end

