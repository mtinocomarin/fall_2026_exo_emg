// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.06%
// test_accuracy: 78.12%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 15:48:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.134729, 1.134724,
    0.088374, -0.088392,
    0.616041, -0.616046,
    0.818867, -0.818853,
    0.897860, -0.897933,
    -1.060956, 1.061056,
    0.209439, -0.209459,
    -0.169390, 0.169389,
    -0.123812, 0.123801,
    0.272726, -0.272632,
    -0.435235, 0.435205,
    0.353698, -0.353741,
};

float Cg_init[2] = {
    -0.445749, -0.445751
};

float xstd_init[12] = {
    0.003692, 0.001334, 0.098390, 0.172651, 0.001696, 0.000517, 0.034265, 0.088878, 0.000888, 0.000095, 0.019828, 0.066711
};

float xmean_init[12] = {
    0.009802, -0.006263, 0.166410, 0.563461, 0.003255, -0.007714, 0.008718, 0.049615, 0.003224, -0.007805, 0.004359, 0.066923
};

