// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.29%
// test_accuracy: 78.57%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_36.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:08:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.397054, 0.397016,
    -0.626897, 0.626925,
    0.401741, -0.401759,
    0.775127, -0.775108,
    1.192812, -1.192805,
    -1.001955, 1.001947,
    -0.264404, 0.264422,
    -0.211793, 0.211783,
    0.777725, -0.777868,
    -0.070539, 0.070934,
    -0.394693, 0.394574,
    -0.069165, 0.068990,
};

float Cg_init[2] = {
    -0.531253, -0.531263
};

float xstd_init[12] = {
    0.003579, 0.001255, 0.103869, 0.170303, 0.001331, 0.000412, 0.021676, 0.071404, 0.000536, 0.000076, 0.015800, 0.065526
};

float xmean_init[12] = {
    0.009665, -0.006298, 0.173143, 0.582286, 0.003110, -0.007748, 0.005714, 0.049143, 0.003110, -0.007811, 0.004229, 0.067886
};

