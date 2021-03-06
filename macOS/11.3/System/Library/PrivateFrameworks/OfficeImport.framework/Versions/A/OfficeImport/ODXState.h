/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

@interface ODXState : OCXReadState {

	CXNamespace* mODXDiagramNamespace;
	OAXDrawingState* mOfficeArtState;

}

@property (nonatomic,retain) CXNamespace * ODXDiagramNamespace; 
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)initWithOfficeArtState:(id)arg1 ;
-(CXNamespace *)ODXDiagramNamespace;
-(id)officeArtState;
-(void)setODXDiagramNamespace:(CXNamespace *)arg1 ;
@end

