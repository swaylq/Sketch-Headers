//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "NSDraggingDestination.h"
#import "NSTouchBarDelegate.h"

@class MSDuplicateOffsetTracker, MSEventHandlerManager, MSMouseTracker, NSArray, NSMutableArray, NSString, NSTouchBar;

@interface MSEventHandler : NSResponder <NSDraggingDestination, NSTouchBarDelegate>
{
    BOOL didDrag;
    struct CGPoint mouseAtTimeOfMenu;
    NSMutableArray *_gestureRecognizers;
    BOOL _mouseIsDown;
    MSEventHandlerManager *_manager;
    id <MSBasicDelegate> _delegate;
    MSDuplicateOffsetTracker *_offsetTracker;
    NSString *_pressedKeys;
    NSTouchBar *_noSelectionTouchBar;
    NSTouchBar *_selectionTouchBar;
    MSMouseTracker *_mouseTracker;
    NSArray *_activeGestureRecognizers;
    struct CGPoint _viewCoordinateMouse;
    struct CGRect _selectionRect;
}

+ (id)eventHandlerWithManager:(id)arg1;
@property(copy, nonatomic) NSArray *activeGestureRecognizers; // @synthesize activeGestureRecognizers=_activeGestureRecognizers;
@property(nonatomic) struct CGRect selectionRect; // @synthesize selectionRect=_selectionRect;
@property(retain, nonatomic) MSMouseTracker *mouseTracker; // @synthesize mouseTracker=_mouseTracker;
@property(retain, nonatomic) NSTouchBar *selectionTouchBar; // @synthesize selectionTouchBar=_selectionTouchBar;
@property(retain, nonatomic) NSTouchBar *noSelectionTouchBar; // @synthesize noSelectionTouchBar=_noSelectionTouchBar;
@property(nonatomic) struct CGPoint viewCoordinateMouse; // @synthesize viewCoordinateMouse=_viewCoordinateMouse;
@property(copy, nonatomic) NSString *pressedKeys; // @synthesize pressedKeys=_pressedKeys;
@property(retain, nonatomic) MSDuplicateOffsetTracker *offsetTracker; // @synthesize offsetTracker=_offsetTracker;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MSEventHandlerManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)touchBarTextColorAction:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)refreshStylePreviewTouchBarButton:(id)arg1 forIdentifier:(id)arg2;
- (void)openInnerShadowAction:(id)arg1;
- (void)openShadowAction:(id)arg1;
- (void)openBorderAction:(id)arg1;
- (void)openFillAction:(id)arg1;
- (void)refreshTouchBarItemWithIdentifier:(id)arg1;
- (id)touchBarWithIdentifiers:(id)arg1;
- (id)selectionTouchBarIdentifiers;
- (id)noSelectionTouchbarIdentifiers;
- (id)makeTouchBar;
- (BOOL)allowsSwitchToInsertAction;
- (BOOL)shouldFitToPixelBounds;
- (double)nudgeDistanceForFlags:(unsigned long long)arg1;
- (BOOL)canDuplicate;
- (void)refreshRulers;
- (BOOL)inspectorShouldShowBlendingProperties;
- (BOOL)inspectorShouldShowLayerSpecificProperties;
- (BOOL)inspectorShouldShowPositions;
- (BOOL)inspectorShouldShowSharedStyles;
- (id)inspectorViewController;
- (unsigned long long)inspectorLocation;
- (id)inspectorViewControllersForLayers:(id)arg1 standardControllers:(id)arg2;
- (void)configureInspector:(id)arg1;
- (void)layerPositionPossiblyChanged;
- (void)willResignFirstResponder;
- (void)handleSymbolInstanceDoubleClick:(id)arg1;
- (void)editLayer:(id)arg1;
- (void)mouseExited;
- (void)mouseEntered:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (BOOL)handlesHandToolItself;
- (struct CGRect)rulerGuidesRectAroundMouse:(struct CGPoint)arg1;
- (id)horizontalRulerGuidesForGridAlign:(struct CGPoint)arg1;
- (id)verticalRulerGuidesForGridAlign:(struct CGPoint)arg1;
- (struct CGPoint)alignPointToGrid:(struct CGPoint)arg1;
- (void)currentPageDidChange;
- (void)layerRulerOriginChanged;
- (void)selectionDidChangeTo:(id)arg1;
- (void)layerListSelectionDidChange:(id)arg1;
- (void)zoomValueDidChange;
- (void)zoomValueWillChangeTo:(double)arg1;
- (double)zoomValue;
- (id)dragDropHintForDropOnPoint:(struct CGPoint)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)imageName;
- (id)toolbarIdentifier;
- (BOOL)shouldDrawLayerSelection;
- (id)selectedLayers;
- (void)changeColor:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)defaultCursor;
- (void)drawHandles;
- (void)windowDidResize:(id)arg1;
- (BOOL)arrowKeyIsPressed:(unsigned short)arg1;
- (BOOL)escapeKeyIsPressed:(unsigned short)arg1;
- (BOOL)enterKeyIsPressed:(unsigned short)arg1;
- (BOOL)deleteKeyIsPressed:(unsigned short)arg1;
- (id)lastEvent;
- (id)valueForUndefinedKey:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)focusOnMainWindow;
- (id)duplicateLayer:(id)arg1 toIndex:(unsigned long long)arg2 offset:(struct CGSize)arg3;
- (id)duplicateSelectedLayersInGroup:(id)arg1 withOffset:(struct CGSize)arg2;
- (id)layersSeparatedByGroups:(id)arg1;
- (id)duplicateSelectedLayersWithOffset:(struct CGSize)arg1;
- (struct CGPoint)currentMousePointInCanvasCoordinates;
- (void)pasteHere:(id)arg1;
- (void)pasteOverSelection:(id)arg1;
- (void)pasteWithOptions:(unsigned long long)arg1;
- (void)pasteWithStyle:(id)arg1;
- (void)paste:(id)arg1;
- (id)layersToCopy;
- (void)copy:(id)arg1;
- (void)doCut:(id)arg1;
- (void)cut:(id)arg1;
- (id)pastingViewPort;
- (void)readFromPasteboard:(id)arg1 options:(unsigned long long)arg2;
- (id)currentPage;
- (void)writeLayers:(id)arg1 toPasteboard:(id)arg2;
- (void)flagsChanged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)returnToDefaultHandlerByClickingOutside;
- (void)returnToDefaultHandler;
- (struct CGPoint)centerPointForZooming;
- (struct CGRect)selectedRect;
- (void)zoomToSelection;
- (void)reloadFollowingBackgroundChangesToDocument;
- (void)commitPendingEdits;
- (void)didMoveThroughHistory:(id)arg1;
- (void)willMoveThroughHistory:(id)arg1;
@property(readonly, nonatomic) NSString *applicableActionItemIdentifier;
@property(readonly, nonatomic) BOOL shouldExitOnContentViewResize;
@property(readonly, nonatomic) BOOL handlesHistoryCoalescing;
- (void)selectAll:(id)arg1;
- (void)drawDragSelection;
- (void)handlerWillLoseFocus;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (void)handlerGotFocus;
- (id)handlerName;
- (void)cancelOperation:(id)arg1;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDown:(id)arg1;
- (void)refreshOverlay;
- (void)prepareGraphicsStateForGroup:(id)arg1 drawingBlock:(CDUnknownBlockType)arg2;
- (void)drawGuidesAndMeasurementsInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *gestureRecognizers;
- (void)viewDidScroll:(id)arg1;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (void)rightMouseDown:(id)arg1;
- (BOOL)mouseMovedEvent:(id)arg1;
- (BOOL)mouseUpEvent:(id)arg1;
- (BOOL)mouseDraggedEvent:(id)arg1;
- (BOOL)mouseDownEvent:(id)arg1;
@property(nonatomic) struct CGPoint scrollOrigin; // @dynamic scrollOrigin;
- (id)parentForInsertingLayer:(id)arg1;
- (id)currentGroup;
- (void)refreshOverlayOfViews;
- (id)document;
- (id)drawView;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (void)drawMeasurementsLabelAtMouseForString:(id)arg1;
- (void)drawMeasurementsLabelAtMouseForRotation:(long long)arg1;
- (void)drawMeasurementsLabelAtMouseForSize:(struct CGSize)arg1;
- (void)refreshMeasurementsLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

