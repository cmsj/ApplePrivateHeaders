/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <FileProviderDaemon/FPDIterator.h>

@class NSURL, NSError;

@interface FPDDiskIterator : FPDIterator {

	NSURL* _rootURL;
	char _stopAccessingRoot;
	char _sentRoot;
	char _lastItemWasPackage;
	char _done;
	NSError* _error;
	unsigned long long _numFoldersPopped;
	CFURLEnumeratorRef _enumerator;

}
-(void)dealloc;
-(id)error;
-(char)done;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
-(id)initWithURL:(id)arg1 isDirectory:(char)arg2 ;
@end
