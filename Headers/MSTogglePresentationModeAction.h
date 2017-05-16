//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSTogglePresentationModeAction : MSDocumentAction
{
    BOOL _didHideLayerList;
    BOOL _didHideInspector;
    BOOL _didHideRulers;
    BOOL _didEnterPresentationMode;
}

@property(nonatomic) BOOL didEnterPresentationMode; // @synthesize didEnterPresentationMode=_didEnterPresentationMode;
@property(nonatomic) BOOL didHideRulers; // @synthesize didHideRulers=_didHideRulers;
@property(nonatomic) BOOL didHideInspector; // @synthesize didHideInspector=_didHideInspector;
@property(nonatomic) BOOL didHideLayerList; // @synthesize didHideLayerList=_didHideLayerList;
- (void)dealloc;
- (void)leavePresentationMode;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)documentWillClose;
- (unsigned long long)fullscreenPresentationOptions:(unsigned long long)arg1;
- (void)hideUIForPresentationMode:(id)arg1;
- (void)doPerformAction:(id)arg1;
- (void)togglePresentationMode:(id)arg1;
- (BOOL)isFullscreen;
- (BOOL)validateMenuItem:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

