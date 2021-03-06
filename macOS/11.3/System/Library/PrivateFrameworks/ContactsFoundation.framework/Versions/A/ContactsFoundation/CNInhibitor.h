/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNInhibitor.h>

@protocol CNInhibitor <NSObject>
@required
-(void)start;
-(void)stop;

@end


@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor> {

	char _debugIsInhibiting;

}

@property (assign,nonatomic) char debugIsInhibiting;                //@synthesize debugIsInhibiting=_debugIsInhibiting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suddenTerminationInhibitor;
+(id)suddenTerminationInhibitorWithProcessInfo:(id)arg1 ;
+(id)os_transactionInhibitorWithLabel:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)setDebugIsInhibiting:(char)arg1 ;
-(char)debugIsInhibiting;
@end

