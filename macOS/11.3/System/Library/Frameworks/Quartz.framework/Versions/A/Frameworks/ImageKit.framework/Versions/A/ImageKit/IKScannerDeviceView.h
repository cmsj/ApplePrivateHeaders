/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSArray, ICScannerDevice, NSURL;

@interface IKScannerDeviceView : NSView {

	id _privateData;

}

@property (assign) char reviewSimpleScanResults; 
@property (assign) char displaysDeviceSelectorControl; 
@property (assign) char displaysScanSizeControl; 
@property (assign) char displaysDocumentNameControl; 
@property (assign) char displaysFileFormatControl; 
@property (copy) NSString * fileFormat; 
@property (readonly) NSArray * supportedFileFormats; 
@property (assign) double compressionQuality; 
@property (assign) char displaysImageCorrectionControl; 
@property (assign) char addAutoDetectionToScanSizeControl; 
@property (assign) char displaysDoneButton; 
@property (assign) unsigned long long simpleScanDocumentType; 
@property (assign) unsigned long long simpleScanOverviewResolution; 
@property (copy) NSString * simpleScanFileFormat; 
@property (assign) id<IKScannerDeviceViewDelegate> delegate; 
@property (assign) ICScannerDevice * scannerDevice; 
@property (assign) long long mode; 
@property (assign) char hasDisplayModeSimple; 
@property (assign) char hasDisplayModeAdvanced; 
@property (assign) long long transferMode; 
@property (copy) NSString * scanControlLabel; 
@property (copy) NSString * overviewControlLabel; 
@property (assign) char displaysDownloadsDirectoryControl; 
@property (retain) NSURL * downloadsDirectory; 
@property (copy) NSString * documentName; 
@property (assign) char displaysPostProcessApplicationControl; 
@property (retain) NSURL * postProcessApplication; 
+(void)initialize;
-(long long)transferMode;
-(void)commonInit:(id)arg1 ;
-(void)drawRect_ib:(CGRect)arg1 ;
-(void)installView:(id)arg1 ;
-(char)displaysDownloadsDirectoryControl;
-(char)displaysPostProcessApplicationControl;
-(NSURL *)postProcessApplication;
-(void)deviceBrowserView:(id)arg1 deviceDidChangeName:(id)arg2 ;
-(void)deviceBrowserView:(id)arg1 deviceDidChangeSharingState:(id)arg2 ;
-(char)hasDisplayModeSimple;
-(char)hasDisplayModeAdvanced;
-(NSString *)scanControlLabel;
-(NSString *)overviewControlLabel;
-(char)displaysDocumentNameControl;
-(char)displaysFileFormatControl;
-(void)setDisplaysFileFormatControl:(char)arg1 ;
-(NSArray *)supportedFileFormats;
-(char)displaysImageCorrectionControl;
-(void)setDisplaysImageCorrectionControl:(char)arg1 ;
-(char)displaysDeviceSelectorControl;
-(char)displaysScanSizeControl;
-(char)addAutoDetectionToScanSizeControl;
-(char)reviewSimpleScanResults;
-(unsigned long long)simpleScanDocumentType;
-(unsigned long long)simpleScanOverviewResolution;
-(NSString *)simpleScanFileFormat;
-(void)finalize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<IKScannerDeviceViewDelegate>)delegate;
-(void)setDelegate:(id<IKScannerDeviceViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)mode;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)viewDidMoveToWindow;
-(void)awakeFromNib;
-(void)viewDidMoveToSuperview;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)commonInit;
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(NSString *)fileFormat;
-(void)setFileFormat:(NSString *)arg1 ;
-(NSString *)documentName;
-(NSURL *)downloadsDirectory;
-(void)setDisplaysPostProcessApplicationControl:(char)arg1 ;
-(void)setScannerDevice:(ICScannerDevice *)arg1 ;
-(void)deviceBrowserView:(id)arg1 selectionDidChange:(id)arg2 ;
-(void)setDocumentName:(NSString *)arg1 ;
-(void)setTransferMode:(long long)arg1 ;
-(void)setPostProcessApplication:(NSURL *)arg1 ;
-(void)setDisplaysDownloadsDirectoryControl:(char)arg1 ;
-(void)setDownloadsDirectory:(NSURL *)arg1 ;
-(void)setDisplaysDocumentNameControl:(char)arg1 ;
-(void)setHasDisplayModeAdvanced:(char)arg1 ;
-(void)setHasDisplayModeSimple:(char)arg1 ;
-(char)displaysDoneButton;
-(void)setReviewSimpleScanResults:(char)arg1 ;
-(void)setDisplaysDeviceSelectorControl:(char)arg1 ;
-(void)setDisplaysScanSizeControl:(char)arg1 ;
-(void)setAddAutoDetectionToScanSizeControl:(char)arg1 ;
-(void)setDisplaysDoneButton:(char)arg1 ;
-(void)setSimpleScanDocumentType:(unsigned long long)arg1 ;
-(void)setSimpleScanOverviewResolution:(unsigned long long)arg1 ;
-(void)setSimpleScanFileFormat:(NSString *)arg1 ;
-(void)setOverviewControlLabel:(NSString *)arg1 ;
-(void)setScanControlLabel:(NSString *)arg1 ;
-(ICScannerDevice *)scannerDevice;
@end

