/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreML/CoreML-Structs.h>
@class NSMutableDictionary, NSObject;

@interface MLFairPlayDecryptSessionManager : NSObject {

	NSMutableDictionary* _modelPathToSessionID;
	SCD_Struct_ML57* _sessionContext;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (retain,readonly) NSMutableDictionary * modelPathToSessionID;              //@synthesize modelPathToSessionID=_modelPathToSessionID - In the implementation block
@property (readonly) SCD_Struct_ML57* sessionContext;                                //@synthesize sessionContext=_sessionContext - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> syncQueue;                  //@synthesize syncQueue=_syncQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(char)startDecryptionOfModelAtPath:(id)arg1 usingKeyBlob:(id)arg2 error:(id*)arg3 ;
-(char)stopDecryptionOfModelAtPath:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modelPathToSessionID;
-(SCD_Struct_ML57*)sessionContext;
@end
