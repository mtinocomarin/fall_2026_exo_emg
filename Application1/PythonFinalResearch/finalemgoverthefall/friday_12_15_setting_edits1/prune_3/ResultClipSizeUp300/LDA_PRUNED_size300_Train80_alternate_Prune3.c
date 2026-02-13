// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.79%
// test_accuracy: 73.75%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:12:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.015290, 1.015296,
    0.313072, -0.313079,
    0.569637, -0.569639,
    0.396296, -0.396298,
    -0.356152, 0.356043,
    0.039683, -0.039577,
    0.007378, -0.007372,
    0.207121, -0.207112,
    -0.149508, 0.149456,
    -0.025386, 0.025486,
    -0.327301, 0.327256,
    0.318408, -0.318406,
};

float Cg_init[2] = {
    -0.330656, -0.330652
};

float xstd_init[12] = {
    0.004722, 0.002144, 0.337368, 0.119887, 0.001428, 0.000258, 0.065506, 0.141178, 0.000659, 0.000152, 0.049624, 0.148559
};

float xmean_init[12] = {
    0.011102, -0.005459, 0.465977, 1.036000, 0.003562, -0.007728, 0.017931, 0.621517, 0.003559, -0.007732, 0.016552, 0.699034
};

