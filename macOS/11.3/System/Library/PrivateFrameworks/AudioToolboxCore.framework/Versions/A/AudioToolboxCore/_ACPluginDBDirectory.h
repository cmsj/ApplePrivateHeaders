/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _ACPluginDB, NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {

	_ACPluginDB* mDB;
	NSString* mFullPath;
	double mModificationDate;
	int mPriority;
	NSMutableDictionary* mBundlesByName;
	FSEventStreamRef mFSMonitor;
	double mCurrentModificationDate;
	NSData* mCarbonComponentHash;
	char mComponentsLoadable;
	NSMutableArray* mChangedBundlePaths;
	unsigned long long mNrOfPathsChanged;
	BOOL mShouldRescan;

}
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadAllComponents:(AudioComponentVector*)arg1 ;
-(id)initWithPath:(id)arg1 priority:(int)arg2 ;
-(BOOL)refreshModificationDate;
-(char)updateCarbonComponentHash;
-(void)bundlesChanged:(id)arg1 shouldRescan:(BOOL)arg2 ;
-(void)eventStreamCallback:(id)arg1 flags:(const unsigned*)arg2 ;
-(void)monitorDirectory;
-(void)scanDirectory;
-(id)scanBundle:(id)arg1 loadable:(char)arg2 ;
@end

