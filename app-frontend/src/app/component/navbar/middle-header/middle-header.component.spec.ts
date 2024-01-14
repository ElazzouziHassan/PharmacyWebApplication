import { ComponentFixture, TestBed } from '@angular/core/testing';

import { MiddleHeaderComponent } from './middle-header.component';

describe('MiddleHeaderComponent', () => {
  let component: MiddleHeaderComponent;
  let fixture: ComponentFixture<MiddleHeaderComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [MiddleHeaderComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(MiddleHeaderComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
