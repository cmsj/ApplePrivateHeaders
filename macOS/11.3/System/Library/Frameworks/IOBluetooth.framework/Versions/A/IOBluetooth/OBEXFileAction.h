/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <libobjc.A.dylib/TransferModuleInterface.h>

@class BluetoothFileReference, IOBluetoothTransferProgress, NSString, NSData, NSTimer, IOBluetoothOBEXSession;

@interface OBEXFileAction : NSObject <TransferModuleInterface> {

	BluetoothFileReference* mFileRef;
	IOBluetoothTransferProgress* mTransferProgress;
	unsigned mOptions;
	char mTargetIsAMac;
	NSString* mActionArgument;
	NSString* mCurrentRemoteDirectory;
	char mActionInProgress;
	char mWeOpenedTheOBEXConnection;
	NSData* mUserDefinedHeaderData;
	SEL mEventSelector;
	id mSelectorTarget;
	char mAbortedByOwner;
	char mWeAreAborting;
	int mInactivityThreshold;
	NSTimer* mInactivityTimer;
	IOBluetoothOBEXSession* mOBEXSession;
	unsigned short mMaxPacketLength;
	CFDataRef mHeadersDataRef;
	unsigned mConnectionID;
	char mUseConnectionID;
	unsigned mArchiveOptions;
	unsigned long long mDataSentSoFar;
	NSData* mTempDataBuffer;
	int mError;
	char mSubclassIsGet;
	int mCountHeader;

}
-(void)setEventTarget:(id)arg1 andSelector:(SEL)arg2 ;
-(void)setOBEXSession:(id)arg1 ;
-(void)setSubclassIsGet:(char)arg1 ;
-(void)initForNewAction;
-(void)notifySelectorOfProgress:(int)arg1 ;
-(void)initiateAction;
-(void)SessionResponseCallback:(OBEXSessionEvent*)arg1 ;
-(void)finalizeActionWithError:(int)arg1 ;
-(int)putFileToRemote:(id)arg1 ;
-(void)startCommand;
-(void)OBEXPutHandler:(OBEXPutCommandResponseData*)arg1 ;
-(int)abortAction:(id)arg1 ;
-(int)getRemoteFileNamed:(id)arg1 toLocalPathAndName:(id)arg2 ;
-(void)OBEXConnectHandler:(OBEXConnectCommandResponseData*)arg1 ;
-(void)OBEXDisconnectHandler:(OBEXDisconnectCommandResponseData*)arg1 ;
-(void)OBEXAbortHandler:(OBEXAbortCommandResponseData*)arg1 ;
-(void)finalizeActionAsync:(id)arg1 ;
-(int)connectWithTargetHeader:(const void*)arg1 targetHeaderLength:(unsigned)arg2 ;
-(void)OBEXGetHandler:(OBEXGetCommandResponseData*)arg1 ;
-(void)setActionArgument:(id)arg1 ;
-(id)currentRemoteDirectory;
-(void)addUserDefinedOBEXHeader:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(int)disconnect;
-(char)isConnected;
-(char)isBusy;
-(int)connect;
-(void)setConnectionID:(unsigned)arg1 ;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)setActionInProgress:(char)arg1 ;
@end

