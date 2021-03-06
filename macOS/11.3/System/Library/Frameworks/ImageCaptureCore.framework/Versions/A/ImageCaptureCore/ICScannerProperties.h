/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSURL, NSString, NSMutableDictionary, NSObject;

@interface ICScannerProperties : NSObject {

	NSArray* _devicePreferredResolutions;
	NSArray* _availableFunctionalUnitTypes;
	id _selectedFunctionalUnit;
	id _lastSelectedFunctionalUnit;
	unsigned long long _transferMode;
	NSURL* _downloadsDirectory;
	NSString* _documentName;
	NSString* _documentUTI;
	NSString* _defaultUsername;
	char _scanCanceled;
	char _supportsICARawFileFormat;
	NSMutableDictionary* _scanContext;
	char _requestedToCancelScan;
	char _scanParamsRetained;
	unsigned _maxMemoryBandSize;
	char _numOpenSessionRetries;
	char _available;
	NSObject*<OS_dispatch_queue> _operationQueue;

}

@property (retain) NSArray * devicePreferredResolutions;                               //@synthesize devicePreferredResolutions=_devicePreferredResolutions - In the implementation block
@property (retain) NSArray * availableFunctionalUnitTypes;                             //@synthesize availableFunctionalUnitTypes=_availableFunctionalUnitTypes - In the implementation block
@property (retain) id selectedFunctionalUnit;                                          //@synthesize selectedFunctionalUnit=_selectedFunctionalUnit - In the implementation block
@property (retain) id lastSelectedFunctionalUnit;                                      //@synthesize lastSelectedFunctionalUnit=_lastSelectedFunctionalUnit - In the implementation block
@property (assign) unsigned long long transferMode;                                    //@synthesize transferMode=_transferMode - In the implementation block
@property (retain) NSURL * downloadsDirectory;                                         //@synthesize downloadsDirectory=_downloadsDirectory - In the implementation block
@property (copy) NSString * documentName;                                              //@synthesize documentName=_documentName - In the implementation block
@property (copy) NSString * documentUTI;                                               //@synthesize documentUTI=_documentUTI - In the implementation block
@property (copy) NSString * defaultUsername;                                           //@synthesize defaultUsername=_defaultUsername - In the implementation block
@property (assign) char scanCanceled;                                                  //@synthesize scanCanceled=_scanCanceled - In the implementation block
@property (assign) char supportsICARawFileFormat;                                      //@synthesize supportsICARawFileFormat=_supportsICARawFileFormat - In the implementation block
@property (retain) NSMutableDictionary * scanContext;                                  //@synthesize scanContext=_scanContext - In the implementation block
@property (assign) char requestedToCancelScan;                                         //@synthesize requestedToCancelScan=_requestedToCancelScan - In the implementation block
@property (assign) char scanParamsRetained;                                            //@synthesize scanParamsRetained=_scanParamsRetained - In the implementation block
@property (assign) unsigned maxMemoryBandSize;                                         //@synthesize maxMemoryBandSize=_maxMemoryBandSize - In the implementation block
@property (assign) char numOpenSessionRetries;                                         //@synthesize numOpenSessionRetries=_numOpenSessionRetries - In the implementation block
@property (assign) char available;                                                     //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(NSArray *)availableFunctionalUnitTypes;
-(unsigned long long)transferMode;
-(NSMutableDictionary *)scanContext;
-(char)supportsICARawFileFormat;
-(char)scanParamsRetained;
-(void)setDevicePreferredResolutions:(NSArray *)arg1 ;
-(void)setAvailableFunctionalUnitTypes:(NSArray *)arg1 ;
-(void)setLastSelectedFunctionalUnit:(id)arg1 ;
-(void)setScanContext:(NSMutableDictionary *)arg1 ;
-(NSArray *)devicePreferredResolutions;
-(id)lastSelectedFunctionalUnit;
-(void)setSupportsICARawFileFormat:(char)arg1 ;
-(char)requestedToCancelScan;
-(void)setRequestedToCancelScan:(char)arg1 ;
-(void)setScanParamsRetained:(char)arg1 ;
-(unsigned)maxMemoryBandSize;
-(void)setMaxMemoryBandSize:(unsigned)arg1 ;
-(char)numOpenSessionRetries;
-(void)setNumOpenSessionRetries:(char)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(void)setOperationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDocumentUTI:(NSString *)arg1 ;
-(char)available;
-(void)setAvailable:(char)arg1 ;
-(NSString *)documentName;
-(NSURL *)downloadsDirectory;
-(char)scanCanceled;
-(void)setScanCanceled:(char)arg1 ;
-(NSString *)documentUTI;
-(id)selectedFunctionalUnit;
-(void)setSelectedFunctionalUnit:(id)arg1 ;
-(void)setDocumentName:(NSString *)arg1 ;
-(NSString *)defaultUsername;
-(void)setDefaultUsername:(NSString *)arg1 ;
-(void)setTransferMode:(unsigned long long)arg1 ;
-(void)setDownloadsDirectory:(NSURL *)arg1 ;
@end

