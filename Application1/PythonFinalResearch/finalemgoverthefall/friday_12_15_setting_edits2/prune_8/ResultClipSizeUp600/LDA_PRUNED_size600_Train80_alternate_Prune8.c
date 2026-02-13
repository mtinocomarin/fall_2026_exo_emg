// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 74.43%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 12:39:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.672768, 0.672788,
    0.176667, -0.176685,
    0.407114, -0.407142,
    0.827136, -0.827125,
    -0.487028, 0.487189,
    0.205314, -0.205471,
    -0.054105, 0.054108,
    -0.175155, 0.175146,
    0.328266, -0.328153,
    -0.158391, 0.158157,
    -0.535564, 0.535636,
    -0.066355, 0.066408,
};

float Cg_init[2] = {
    -0.387121, -0.387126
};

float xstd_init[12] = {
    0.004106, 0.001765, 0.143850, 0.202728, 0.001197, 0.000215, 0.030400, 0.088486, 0.000684, 0.000175, 0.028860, 0.107925
};

float xmean_init[12] = {
    0.010216, -0.005794, 0.236566, 0.676061, 0.003465, -0.007748, 0.010707, 0.081818, 0.003527, -0.007731, 0.012323, 0.117879
};

