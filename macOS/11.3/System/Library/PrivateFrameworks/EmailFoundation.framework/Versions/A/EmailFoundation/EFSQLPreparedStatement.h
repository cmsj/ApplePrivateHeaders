/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSString;

@interface EFSQLPreparedStatement : NSObject {

	sqlite3_stmtRef _compiled;
	double _allowedExecutionTime;

}

@property (nonatomic,readonly) char isFinalized; 
@property (nonatomic,copy,readonly) NSString * originalString; 
@property (nonatomic,readonly) sqlite3_stmtRef compiled; 
@property (assign,nonatomic) double allowedExecutionTime;                   //@synthesize allowedExecutionTime=_allowedExecutionTime - In the implementation block
+(id)log;
-(void)dealloc;
-(id)debugDescription;
-(char)finalizeWithError:(id*)arg1 ;
-(sqlite3_stmtRef)compiled;
-(char)resetWithError:(id*)arg1 ;
-(NSString *)originalString;
-(char)isFinalized;
-(id)initWithString:(id)arg1 connection:(id)arg2 ;
-(char)executeUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)clearBindingsWithError:(id*)arg1 ;
-(char)executeWithNamedBindings:(id)arg1 usingBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)executeWithNamedBindings:(id)arg1 rowsChanged:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)executeWithIndexedBindings:(id)arg1 usingBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(double)allowedExecutionTime;
-(void)setAllowedExecutionTime:(double)arg1 ;
@end

