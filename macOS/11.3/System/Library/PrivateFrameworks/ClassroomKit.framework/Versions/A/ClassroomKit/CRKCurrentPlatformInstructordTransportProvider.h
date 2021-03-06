/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSURL, NSString;

@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> mBaseProvider;
	NSURL* _classroomAppBundleURL;
	NSString* _instructordBundleIdentifier;

}

@property (nonatomic,retain) NSURL * classroomAppBundleURL;                     //@synthesize classroomAppBundleURL=_classroomAppBundleURL - In the implementation block
@property (nonatomic,copy) NSString * instructordBundleIdentifier;              //@synthesize instructordBundleIdentifier=_instructordBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(NSString *)instructordBundleIdentifier;
-(id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 ;
-(id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 instructordBundleIdentifier:(id)arg3 ;
-(id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg1 ;
-(NSURL *)classroomAppBundleURL;
-(void)setClassroomAppBundleURL:(NSURL *)arg1 ;
-(void)setInstructordBundleIdentifier:(NSString *)arg1 ;
@end

