/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OCDDelayedMediaContext.h>

@class NSString;

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {

	SsrwOOStream* mStream;
	unsigned mStreamID;
	unsigned mStartOffset;
	unsigned mByteCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(SsrwOOStream*)stream;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 stream:(SsrwOOStream*)arg3 streamID:(unsigned)arg4 ;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
-(id)dataRep;
@end
