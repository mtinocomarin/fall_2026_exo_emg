// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_5\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.89%
// test_accuracy: 84.38%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:04:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.756336, 0.756330,
    -0.091827, 0.091829,
    0.405824, -0.405835,
    0.655883, -0.655871,
    0.908277, -0.908445,
    -1.345003, 1.345259,
    0.353438, -0.353510,
    -0.176508, 0.176495,
    0.901131, -0.901139,
    -0.435590, 0.435651,
    -0.349290, 0.349269,
    0.304031, -0.304053,
};

float Cg_init[2] = {
    -0.529108, -0.529127
};

float xstd_init[12] = {
    0.003825, 0.001382, 0.095355, 0.167487, 0.001696, 0.000521, 0.032332, 0.086643, 0.000564, 0.000091, 0.018707, 0.066616
};

float xmean_init[12] = {
    0.009833, -0.006258, 0.164409, 0.568226, 0.003261, -0.007696, 0.008280, 0.050806, 0.003107, -0.007811, 0.004301, 0.064355
};

