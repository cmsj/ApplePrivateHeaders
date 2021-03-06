/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator {

	char _closed;
	CKSQLiteStatement* _statement;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) char closed;                                //@synthesize closed=_closed - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(void)close;
-(id)block;
-(char)closed;
-(void)setClosed:(char)arg1 ;
-(CKSQLiteStatement *)statement;
-(void)setStatement:(CKSQLiteStatement *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
@end

