/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetoothUI/IOBluetoothUI-Structs.h>
#import <IOBluetoothUI/IOBluetoothConcreteDeviceController.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>

@class NSButton, NSTableView, ObjectTableDataSource, NSString;

@interface IOBluetoothConcreteServiceBrowserController : IOBluetoothConcreteDeviceController <NSTableViewDelegate> {

	NSButton* mRefreshServicesButton;
	NSTableView* mServicesTableView;
	ObjectTableDataSource* mServicesTableDataSource;
	char mSDPQueryInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceBrowserController:(unsigned)arg1 ;
+(int)browseDevices:(id*)arg1 options:(unsigned)arg2 ;
+(int)browseDevicesAsSheetForWindow:(id*)arg1 options:(unsigned)arg2 window:(id)arg3 ;
-(char)isKindOfClass:(Class)arg1 ;
-(id)init;
-(void)awakeFromNib;
-(char)selectionShouldChangeInTableView:(id)arg1 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(id)windowNibName;
-(id)getResults;
-(OpaqueIOBluetoothObjectRefRef)getServiceBrowserControllerRef;
-(int)discover:(id*)arg1 ;
-(int)discoverAsSheetForWindow:(id)arg1 withRecord:(id*)arg2 ;
-(int)discoverWithDeviceAttributes:(IOBluetoothDeviceSearchAttributes*)arg1 serviceList:(id)arg2 serviceRecord:(id*)arg3 ;
-(void)handleSelectButton:(id)arg1 ;
-(void)enableSelect:(char)arg1 ;
-(id)getWindowFrameName;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(void)startSearchServiceWindow;
-(void)updateServicesTableViewForSelectedDevice;
-(void)sheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)deviceInquiryTableViewInquiryComplete:(id)arg1 error:(int)arg2 aborted:(char)arg3 ;
-(void)enableRefreshServicesButton:(char)arg1 ;
-(void)getSDPInfoForDevice:(id)arg1 ignoreCache:(char)arg2 ;
-(void)deviceCategoryChanged:(id)arg1 ;
-(void)refreshServiceList:(id)arg1 ;
@end

