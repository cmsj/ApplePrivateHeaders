/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, NSError, NSMutableArray;

@interface NSDirectoryTraversalOperation : NSOperation {

	id _delegate;
	NSString* _sourcePath;
	NSError* _error;
	void* _stream;
	int _optionsFlags;
	int _lastDeviceInode;
	char _shouldFilterUnderbars;
	char _stopped;
	NSMutableArray* _deviceEntryPoints;
	NSMutableArray* _deviceNumbers;

}
+(char)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
+(id)directoryTraversalOperationAtPath:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)error;
-(id)initWithPath:(id)arg1 ;
-(char)_shouldFilterEntry:(ftsent*)arg1 ;
-(void)handlePathname:(id)arg1 ;
-(char)shouldProceedAfterError:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(char)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)main;
@end

