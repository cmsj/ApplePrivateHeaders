/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSURL, NSString, NSFileManager, NSMutableIndexSet, NSObject;

@interface PLSimpleDCIMDirectory : NSObject {

	NSURL* _baseURL;
	NSString* _subDirSuffix;
	unsigned long long _directoryLimit;
	NSFileManager* _fileManager;
	NSMutableIndexSet* _availableFileNameNumbers;
	NSURL* _currentSubDirectory;
	unsigned long long _currentSubDirectoryNumber;
	NSString* _userInfoPath;
	char _hasLoadedUserInfo;
	char _representsCameraRoll;
	NSObject*<OS_dispatch_queue> _isolation;

}

@property (nonatomic,retain,readonly) NSURL * currentSubDirectory; 
@property (assign) char representsCameraRoll;                                   //@synthesize representsCameraRoll=_representsCameraRoll - In the implementation block
@property (readonly) NSURL * directoryURL;                                      //@synthesize baseURL=_baseURL - In the implementation block
+(id)migrateOldPlistToNewPlist:(id)arg1 ;
+(id)cameraRollPlistName;
+(id)cloudPlistName;
-(id)init;
-(void)reset;
-(NSURL *)directoryURL;
-(char)representsCameraRoll;
-(id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4 ;
-(id)nextAvailableFileURLWithExtension:(id)arg1 ;
-(void)setRepresentsCameraRoll:(char)arg1 ;
-(void)_saveUserInfo;
-(char)_ensureDirectoryExists:(id)arg1 ;
-(NSURL *)currentSubDirectory;
-(void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2 ;
-(id)subDirURLForNumber:(unsigned long long)arg1 create:(char)arg2 didCreate:(char*)arg3 ;
-(NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1 ;
-(id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1 ;
@end

