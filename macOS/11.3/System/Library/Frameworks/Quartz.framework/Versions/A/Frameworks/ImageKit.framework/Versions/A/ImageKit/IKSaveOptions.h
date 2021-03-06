/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKSaveOptionsHandler, NSSavePanel, NSString, NSDictionary;

@interface IKSaveOptions : NSObject {

	void* _privateData;
	id _saveOptionsView;
	char _rememberLastSetting;
	id _delegate;
	IKSaveOptionsHandler* _handler;
	NSSavePanel* _savePanel;
	NSString* _imageUTTypePriv;
	NSDictionary* _imagePropertiesPriv;

}

@property (retain) IKSaveOptionsHandler * handler;                          //@synthesize handler=_handler - In the implementation block
@property (retain) NSSavePanel * savePanel;                                 //@synthesize savePanel=_savePanel - In the implementation block
@property (copy) NSString * imageUTTypePriv;                                //@synthesize imageUTTypePriv=_imageUTTypePriv - In the implementation block
@property (retain) NSDictionary * imagePropertiesPriv;                      //@synthesize imagePropertiesPriv=_imagePropertiesPriv - In the implementation block
@property (assign,nonatomic) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * imageProperties; 
@property (nonatomic,readonly) NSString * imageUTType; 
@property (nonatomic,readonly) NSDictionary * userSelection; 
@property (assign,nonatomic) char rememberLastSetting;                      //@synthesize rememberLastSetting=_rememberLastSetting - In the implementation block
-(NSDictionary *)imagePropertiesPriv;
-(void)setImageUTTypePriv:(NSString *)arg1 ;
-(void)setImagePropertiesPriv:(NSDictionary *)arg1 ;
-(void)setCanCalculateEstimatedSize:(char)arg1 ;
-(void)setRememberLastSetting:(char)arg1 ;
-(void)savePanelDidEndSheet:(id)arg1 ;
-(id)findButtonWithPrompt:(id)arg1 inView:(id)arg2 ;
-(void)updateImageProperties:(id)arg1 imageUTType:(id)arg2 ;
-(id)pdfOptions;
-(void)updateFileExtensions;
-(void)setOKButtonDisabled:(char)arg1 ;
-(void)addSaveOptionsToView:(id)arg1 ;
-(void)setShowsOrientationCheckbox:(char)arg1 ;
-(char)showsOrientationCheckbox;
-(void)setOrientationCheckboxValue:(char)arg1 ;
-(char)orientationCheckboxValue;
-(char)rememberLastSetting;
-(NSString *)imageUTTypePriv;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(IKSaveOptionsHandler *)handler;
-(void)setHandler:(IKSaveOptionsHandler *)arg1 ;
-(NSSavePanel *)savePanel;
-(NSDictionary *)imageProperties;
-(NSDictionary *)userSelection;
-(id)initWithImageProperties:(id)arg1 imageUTType:(id)arg2 ;
-(void)addSaveOptionsAccessoryViewToSavePanel:(id)arg1 ;
-(NSString *)imageUTType;
-(void)setSavePanel:(NSSavePanel *)arg1 ;
-(char)imagePropertiesAreEqualTo:(id)arg1 forType:(id)arg2 ;
-(void)syncMetaData:(id)arg1 ;
-(void)setEstimatedFileSize:(id)arg1 ;
@end

