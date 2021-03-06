/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/Versions/A/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BUTemporaryDirectory : NSObject {

	NSString* _path;
	char _leak;

}
-(void)dealloc;
-(id)init;
-(id)path;
-(id)URL;
-(id)initWithError:(id*)arg1 ;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(char)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithSignature:(id)arg1 error:(id*)arg2 ;
-(id)initForWritingToURL:(id)arg1 error:(id*)arg2 ;
-(void)leakTemporaryDirectory;
@end

