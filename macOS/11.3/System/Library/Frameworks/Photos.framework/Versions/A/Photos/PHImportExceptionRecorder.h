/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHImportExceptionRecorder.h>
@class NSMutableArray;


@protocol PHImportExceptionRecorder <NSObject>
@property (nonatomic,readonly) NSMutableArray * exceptions; 
@required
-(id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5;
-(void)addException:(id)arg1;
-(void)addExceptions:(id)arg1;
-(id)logForExceptions;
-(NSMutableArray *)exceptions;

@end


@class NSMutableArray, NSString;

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder> {

	NSMutableArray* _exceptions;

}

@property (nonatomic,readonly) NSMutableArray * exceptions;              //@synthesize exceptions=_exceptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)addExceptionWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char*)arg4 line:(unsigned long long)arg5 ;
-(void)addException:(id)arg1 ;
-(void)addExceptions:(id)arg1 ;
-(id)logForExceptions;
-(NSMutableArray *)exceptions;
-(void)logErrors;
@end

