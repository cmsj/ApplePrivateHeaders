/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface LSAppTranslocationResult : NSObject {

	NSURL* _relativePathRoot;
	NSURL* _originalApplicationURL;
	NSURL* _effectiveApplicationURL;
	NSURL* _secureDirectoryURL;

}

@property (readonly) NSURL * originalApplicationURL;               //@synthesize originalApplicationURL=_originalApplicationURL - In the implementation block
@property (readonly) NSURL * effectiveApplicationURL;              //@synthesize effectiveApplicationURL=_effectiveApplicationURL - In the implementation block
@property (readonly) NSURL * secureDirectoryURL;                   //@synthesize secureDirectoryURL=_secureDirectoryURL - In the implementation block
+(id)examineAndTranslocateApplicationAtURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithOriginalURL:(id)arg1 effectiveURL:(id)arg2 secureDirectoryURL:(id)arg3 relativeRootURL:(id)arg4 ;
-(void)abandonSecureDirectory;
-(id)mapRelativePathToEffectiveURL:(id)arg1 ;
-(NSURL *)originalApplicationURL;
-(NSURL *)effectiveApplicationURL;
-(NSURL *)secureDirectoryURL;
@end

